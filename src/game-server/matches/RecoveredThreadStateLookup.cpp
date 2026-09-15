// Lazy thread-slot allocation and per-thread factory initialization.
// x86 ABI: ECX is the wrapper; [ESP+4] is the factory; RET 4 cleans it.
// Preserves original debug assertions; dependency implementations remain external.
extern "C" char Slots005DEB4C;
extern "C" char Storage005DEB50;
extern "C" void Allocate0048F110();
extern "C" void Construct005480AC();
extern "C" char File005CA28C;
extern "C" void Assert00534A00();
extern "C" void AllocateSlot005481C2();
extern "C" void Get00548D50();
extern "C" void Set005484E9();
extern "C" __declspec(naked) void *Recovered005489BC(void *)
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 10h
    __asm push ebx
    __asm push esi
    __asm push edi
    __asm mov dword ptr [ebp-0ch], ecx
    __asm mov eax, dword ptr [ebp-0ch]
    __asm cmp dword ptr [eax], 0
    __asm jne slot_ready
    __asm cmp dword ptr [Slots005DEB4C], 0
    __asm jne manager_ready
    __asm push offset Storage005DEB50
    __asm push 34h
    __asm call Allocate0048F110
    __asm mov dword ptr [ebp-8], eax
    __asm cmp dword ptr [ebp-8], 0
    __asm je allocation_failed
    __asm mov ecx, dword ptr [ebp-8]
    __asm call Construct005480AC
    __asm mov dword ptr [ebp-10h], eax
    __asm jmp publish_manager
    __asm allocation_failed:
    __asm mov dword ptr [ebp-10h], 0
    __asm publish_manager:
    __asm mov ecx, dword ptr [ebp-10h]
    __asm mov dword ptr [Slots005DEB4C], ecx
    __asm check_manager:
    __asm cmp dword ptr [Slots005DEB4C], 0
    __asm jne manager_asserted
    __asm push 18ah
    __asm push offset File005CA28C
    __asm call Assert00534A00
    __asm test eax, eax
    __asm je manager_asserted
    __asm int 3
    __asm manager_asserted:
    __asm xor edx, edx
    __asm test edx, edx
    __asm jne check_manager
    __asm manager_ready:
    __asm mov ecx, dword ptr [Slots005DEB4C]
    __asm call AllocateSlot005481C2
    __asm mov ecx, dword ptr [ebp-0ch]
    __asm mov dword ptr [ecx], eax
    __asm check_slot:
    __asm mov edx, dword ptr [ebp-0ch]
    __asm cmp dword ptr [edx], 0
    __asm jne slot_asserted
    __asm push 18dh
    __asm push offset File005CA28C
    __asm call Assert00534A00
    __asm test eax, eax
    __asm je slot_asserted
    __asm int 3
    __asm slot_asserted:
    __asm xor eax, eax
    __asm test eax, eax
    __asm jne check_slot
    __asm slot_ready:
    __asm mov ecx, dword ptr [ebp-0ch]
    __asm mov edx, dword ptr [ecx]
    __asm push edx
    __asm mov ecx, dword ptr [Slots005DEB4C]
    __asm call Get00548D50
    __asm mov dword ptr [ebp-4], eax
    __asm cmp dword ptr [ebp-4], 0
    __asm jne done
    __asm call dword ptr [ebp+8]
    __asm mov dword ptr [ebp-4], eax
    __asm mov eax, dword ptr [ebp-4]
    __asm push eax
    __asm mov ecx, dword ptr [ebp-0ch]
    __asm mov edx, dword ptr [ecx]
    __asm push edx
    __asm mov ecx, dword ptr [Slots005DEB4C]
    __asm call Set005484E9
    __asm check_value:
    __asm mov eax, dword ptr [ebp-0ch]
    __asm mov ecx, dword ptr [eax]
    __asm push ecx
    __asm mov ecx, dword ptr [Slots005DEB4C]
    __asm call Get00548D50
    __asm cmp eax, dword ptr [ebp-4]
    __asm je value_asserted
    __asm push 198h
    __asm push offset File005CA28C
    __asm call Assert00534A00
    __asm test eax, eax
    __asm je value_asserted
    __asm int 3
    __asm value_asserted:
    __asm xor edx, edx
    __asm test edx, edx
    __asm jne check_value
    __asm done:
    __asm mov eax, dword ptr [ebp-4]
    __asm pop edi
    __asm pop esi
    __asm pop ebx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
