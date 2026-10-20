// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00560F50 .. +0xFC bytes.
extern "C" __declspec(naked) void FUN_00560f50_00560F50() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f5b5h
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
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 0C 5E F7 FF: call 0x4d6d80
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x5e
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 3ch
        ; Exact mapped bytes E8 81 3D FC FF: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 40h
        ; Exact mapped bytes E8 4B 31 00 00: call 0x5640e0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 44h
        ; Exact mapped bytes E8 60 31 00 00: call 0x564100
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 63cb44h
        push 1dh
        push 67c6f0h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 A7 92 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x92
        __asm _emit 0xf7
        __asm _emit 0xff
        push 1eh
        push 67c6f0h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 97 92 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x92
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 20h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 24h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 1ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [edx + 28h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 30h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 34h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 2ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 38h], 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + 68h], ecx
        push 2ah
        push 67c6f0h
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 2E 92 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x92
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
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
