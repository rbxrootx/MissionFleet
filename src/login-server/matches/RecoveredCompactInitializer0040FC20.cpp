// Exact compact x86 forwarding/initialization sequence.
extern "C" void *Import0043C240;
extern "C" __declspec(naked) void Recovered0040FC20()
{
    __asm mov eax, dword ptr [esp+4]
    __asm push eax
    __asm call dword ptr [Import0043C240]
    __asm ret 4
}
