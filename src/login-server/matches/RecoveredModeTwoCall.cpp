// Invoke the shared login-server routine with its fixed mode value of two.
extern "C" void Target0042EB1D(int mode);

extern "C" __declspec(naked) void Recovered0042ECC0()
{
    __asm push 2
    __asm call Target0042EB1D
    __asm ret
}
