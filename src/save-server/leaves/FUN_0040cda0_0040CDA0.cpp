// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040CDA0 .. +0x86 bytes.
extern "C" __declspec(naked) void FUN_0040cda0_0040CDA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 58h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 58h]
        mov ecx, 16h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 633214h
        mov dword ptr [ebp - 0ch], 633284h
        push 0
        push 0
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 F2 4A FF FF: call 0x4018ca
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov cl, byte ptr [eax]
        push ecx
        lea edx, [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 DA 46 FF FF: call 0x4014c9
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 75 0B: jne 0x40ce08
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax - 4]
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes EB 08: jmp 0x40ce10
        __asm _emit 0xeb
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        pop edi
        pop esi
        pop ebx
        add esp, 58h
        cmp ebp, esp
        ; Exact mapped bytes E8 D0 7F 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x7f
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
