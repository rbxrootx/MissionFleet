// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00421C50 .. +0xA7 bytes.
extern "C" __declspec(naked) void FUN_00421c50_00421C50() {
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
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x421c7f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        ; Exact mapped bytes E8 F2 F9 FD FF: call 0x40167c
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xf9
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 73 4D: jae 0x421cdc
        __asm _emit 0x73
        __asm _emit 0x4d
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        ; Exact mapped bytes E8 88 F5 FD FF: call 0x401226
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xf5
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 1C: je 0x421cc5
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5C F8 FD FF: call 0x401519
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xf8
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB DE: jmp 0x421ca3
        __asm _emit 0xeb
        __asm _emit 0xde
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        ; Exact mapped bytes E8 52 F5 FD FF: call 0x401226
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xf5
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [eax], 0
        ; Exact mapped bytes EB 9A: jmp 0x421c76
        __asm _emit 0xeb
        __asm _emit 0x9a
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10h], 0
        pop edi
        pop esi
        pop ebx
        add esp, 50h
        cmp ebp, esp
        ; Exact mapped bytes E8 FD 30 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
