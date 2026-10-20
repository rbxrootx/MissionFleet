// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00461810 .. +0xE8 bytes.
extern "C" __declspec(naked) void FUN_00461810_00461810() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f769h
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
        ; Exact mapped bytes E8 49 55 07 00: call 0x4d6d80
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x55
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 30h
        ; Exact mapped bytes E8 D7 1B 00 00: call 0x463420
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 34h
        ; Exact mapped bytes E8 EC 1B 00 00: call 0x463440
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 38h
        ; Exact mapped bytes E8 01 1C 00 00: call 0x463460
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 3ch
        ; Exact mapped bytes E8 16 1C 00 00: call 0x463480
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 40h
        ; Exact mapped bytes E8 2B 1C 00 00: call 0x4634a0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 63cebch
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 1ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 2ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 20h], edx
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 20h], 0
        ; Exact mapped bytes 75 11: jne 0x4618b4
        __asm _emit 0x75
        __asm _emit 0x11
        push 33h
        push 67ca48h
        ; Exact mapped bytes E8 91 74 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x74
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4618b4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x46189a
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 24h], 1
        push 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 20h]
        ; Exact mapped bytes E8 D3 F9 0E 00: call 0x5512a4
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xf9
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 24h], 0ffffffffh
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
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
