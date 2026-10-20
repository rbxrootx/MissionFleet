// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055F716 .. +0xD6 bytes.
extern "C" __declspec(naked) void FUN_0055f716_0055F716() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f174h
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
        mov eax, dword ptr [ebp + 14h]
        push eax
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C2 FC FF FF: call 0x55f40b
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0a0h
        ; Exact mapped bytes E8 A9 55 FC FF: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x55
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx], 63c144h
        push 45eh
        push 67b3b8h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 E2 AA F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xaa
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 1A: jne 0x55f79e
        __asm _emit 0x75
        __asm _emit 0x1a
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x55f79e
        __asm _emit 0x75
        __asm _emit 0x14
        push 45fh
        push 67b3b8h
        ; Exact mapped bytes E8 A7 95 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x95
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55f79e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x55f77e
        __asm _emit 0x75
        __asm _emit 0xda
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 98h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 9ch], edx
        push 0f08dh
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0a0h
        ; Exact mapped bytes E8 B1 A4 F7 FF: call 0x4d9c80
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xa4
        __asm _emit 0xf7
        __asm _emit 0xff
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
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
