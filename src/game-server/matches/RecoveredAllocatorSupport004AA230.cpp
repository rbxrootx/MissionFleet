// Exact recovered allocator/runtime support bridge.
extern "C" int Heap005DEE08;
extern "C" void Target004AA280();
extern "C" __declspec(naked) void Recovered004AA230()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov eax, dword ptr [ebp+20]
    __asm push eax
    __asm mov ecx, dword ptr [ebp+16]
    __asm push ecx
    __asm mov edx, dword ptr [ebp+12]
    __asm push edx
    __asm mov eax, dword ptr [Heap005DEE08]
    __asm push eax
    __asm mov ecx, dword ptr [ebp+8]
    __asm push ecx
    __asm call Target004AA280
    __asm add esp, 20
    __asm pop ebp
    __asm ret
}
