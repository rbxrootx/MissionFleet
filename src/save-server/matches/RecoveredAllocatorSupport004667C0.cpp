// Exact recovered allocator/runtime support bridge.
extern "C" int Heap00687434;
extern "C" void Target00466810();
extern "C" __declspec(naked) void Recovered004667C0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov eax, dword ptr [ebp+20]
    __asm push eax
    __asm mov ecx, dword ptr [ebp+16]
    __asm push ecx
    __asm mov edx, dword ptr [ebp+12]
    __asm push edx
    __asm mov eax, dword ptr [Heap00687434]
    __asm push eax
    __asm mov ecx, dword ptr [ebp+8]
    __asm push ecx
    __asm call Target00466810
    __asm add esp, 20
    __asm mov dword ptr [ebp-4], eax
    __asm mov eax, dword ptr [ebp-4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
