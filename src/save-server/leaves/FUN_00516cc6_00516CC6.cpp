// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00516CC6 .. +0xB1 bytes.
extern "C" __declspec(naked) void FUN_00516cc6_00516CC6() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58d54eh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 8A 85 FB FF: call 0x4cf277
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x85
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 64h
        ; Exact mapped bytes E8 81 80 FA FF: call 0x4bed80
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 78h
        ; Exact mapped bytes E8 F9 DF 00 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 637b18h
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x516d35
        __asm _emit 0x75
        __asm _emit 0x14
        push 259h
        push 674cach
        ; Exact mapped bytes E8 10 20 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x516d35
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x516d1b
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 78h
        ; Exact mapped bytes E8 53 5E FB FF: call 0x4ccb9d
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x5e
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 DF 00 00 00: call 0x516e39
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
