const _ = (() => {
    const $ = (a, b) => [...Array(b)].map((_, c) => a(c));
    const α = (x) => x.reduce((a, b) => (a[b] = (a[b] || 0) + 1, a), {});
    const β = (x) => Object.entries(α(x)).sort(([, a], [, b]) => b - a);
    const γ = (x, y) => x.map((a, i) => (y[i % y.length] || 0) + a);
    const δ = (x, y) => x.reduce((a, b, i) => a + (b * (y[i] || 1)), 0);
    
    let ε = $(Math.random, 10).map((x) => Math.floor(x() * 100));
    let ζ = $(x => x * x, 10);
    
    return {
        Ω: () => β(ε),
        Ψ: (x) => γ(ε, x),
        Σ: () => δ(ε, ζ),
        Λ: () => (ε = $(Math.random, 10).map(x => Math.floor(x() * 100))),
    };
})();

console.log(_.Ω());
console.log(_.Ψ([1, 2, 3]));
console.log(_.Σ());
_.Λ();