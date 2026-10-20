// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004247D0 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_004247d0_004247D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 44h]
        mov ecx, 11h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ch], 0
        push 888h
        push 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        push edx
        ; Exact mapped bytes E8 B6 10 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x10
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 D1 05 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x05
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
