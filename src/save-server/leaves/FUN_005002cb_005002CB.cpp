// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005002CB .. +0xBB bytes.
extern "C" __declspec(naked) void FUN_005002cb_005002CB() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 400001h
        cmp ecx, 400000h
        ; Exact mapped bytes 0F 85 96 00 00 00: jne 0x500380
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 64h]
        and eax, 0a000h
        test eax, eax
        ; Exact mapped bytes 74 45: je 0x50033e
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D DC 6D 68 00: mov ecx, dword ptr [0x686ddc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes 8B 15 E0 6D 68 00: mov edx, dword ptr [0x686de0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 B7 1F 03 00: call 0x5322c6
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x1f
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        sub eax, dword ptr [ecx + 48h]
        mov edx, dword ptr [ebp - 4]
        sub eax, dword ptr [edx + 4ch]
        push eax
        push 3
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 48h]
        push ecx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        add ecx, 2
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FB CD 01 00: call 0x51d137
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xcd
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 42: jmp 0x500380
        __asm _emit 0xeb
        __asm _emit 0x42
        ; Exact mapped bytes 8B 15 DC 6D 68 00: mov edx, dword ptr [0x686ddc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes A1 E0 6D 68 00: mov eax, dword ptr [0x686de0]
        __asm _emit 0xa1
        __asm _emit 0xe0
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        push 3
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 5B 1F 03 00: call 0x5322b0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x1f
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        sub eax, dword ptr [ecx + 48h]
        mov edx, dword ptr [ebp - 4]
        sub eax, dword ptr [edx + 4ch]
        push eax
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        add ecx, 2
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 48h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B7 CD 01 00: call 0x51d137
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xcd
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
