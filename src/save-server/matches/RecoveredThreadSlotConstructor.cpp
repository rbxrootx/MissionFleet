// x86 ABI: ECX supplies storage; EAX returns the initialized manager.
// Initialize the embedded list, slot fields, TLS index, then critical section.
// Preserve the original TLS-allocation failure call and initialization order.
extern "C" void ListConstruct00543F10();
extern "C" void ListInit0044B5E0();
extern "C" void *TlsAlloc0068B960; // Win32 import address slot.
extern "C" void AllocationFailure004A2EDC();
extern "C" void *InitializeCriticalSection0068B974; // Win32 import address slot.
extern "C" __declspec(naked) void *Recovered0054314C()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm push 0
    __asm mov ecx, dword ptr [ebp-4]
    __asm add ecx, 14h
    __asm call ListConstruct00543F10
    __asm push 4
    __asm mov ecx, dword ptr [ebp-4]
    __asm add ecx, 14h
    __asm call ListInit0044B5E0
    __asm mov eax, dword ptr [ebp-4]
    __asm mov dword ptr [eax+4], 0
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov dword ptr [ecx+8], 1
    __asm mov edx, dword ptr [ebp-4]
    __asm mov dword ptr [edx+0ch], 0
    __asm mov eax, dword ptr [ebp-4]
    __asm mov dword ptr [eax+10h], 0
    __asm call dword ptr [TlsAlloc0068B960]
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov dword ptr [ecx], eax
    __asm mov edx, dword ptr [ebp-4]
    __asm cmp dword ptr [edx], -1
    __asm jne initialize_lock
    __asm call AllocationFailure004A2EDC
    __asm initialize_lock:
    __asm mov eax, dword ptr [ebp-4]
    __asm add eax, 1ch
    __asm push eax
    __asm call dword ptr [InitializeCriticalSection0068B974]
    __asm mov eax, dword ptr [ebp-4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
