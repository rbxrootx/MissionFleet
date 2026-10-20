// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004231B0 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_004231b0_004231B0() {
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
        cmp dword ptr [eax + 8], -1
        ; Exact mapped bytes 74 19: je 0x4231ef
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes E8 4A 84 10 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 F4 1B 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x1b
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
