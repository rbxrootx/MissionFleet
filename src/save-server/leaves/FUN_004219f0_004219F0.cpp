// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004219F0 .. +0x8D bytes.
extern "C" __declspec(naked) void FUN_004219f0_004219F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 50h]
        mov ecx, 14h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        add ecx, 4
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 4]
        ; Exact mapped bytes E8 F9 FE FD FF: call 0x40191a
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xfe
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes E8 F8 F6 FD FF: call 0x401127
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xf6
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 10h], 0
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 2A: jne 0x421a69
        __asm _emit 0x75
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 73 19: jae 0x421a69
        __asm _emit 0x73
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 4]
        add ecx, 4
        ; Exact mapped bytes E8 C4 F7 FD FF: call 0x401226
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xf7
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes EB D0: jmp 0x421a39
        __asm _emit 0xeb
        __asm _emit 0xd0
        mov eax, dword ptr [ebp - 10h]
        pop edi
        pop esi
        pop ebx
        add esp, 50h
        cmp ebp, esp
        ; Exact mapped bytes E8 77 33 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x33
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
