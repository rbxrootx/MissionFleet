// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004612DA .. +0x101 bytes.
extern "C" __declspec(naked) void FUN_004612da_004612DA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 20h], ecx
        ; Exact mapped bytes A1 7C CB 5D 00: mov eax, dword ptr [0x5dcb7c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 40cd8h]
        ; Exact mapped bytes E8 70 57 FC FF: call 0x426a80
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x57
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 A9 00 00 00: je 0x4613c6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 10h
        push 0
        lea ecx, [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 46 80 04 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 10h
        push 0
        mov edx, dword ptr [ebp - 20h]
        add edx, 30h
        push edx
        ; Exact mapped bytes E8 33 80 04 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 1ch], 10h
        lea eax, [ebp - 1ch]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 29 E0 FE FF: call 0x44f380
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 26: je 0x461386
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 20h]
        mov al, byte ptr [ebp - 10h]
        mov byte ptr [edx + 30h], al
        mov ecx, dword ptr [ebp - 20h]
        mov dl, byte ptr [ebp - 0fh]
        mov byte ptr [ecx + 31h], dl
        mov eax, dword ptr [ebp - 20h]
        mov cl, byte ptr [ebp - 0eh]
        mov byte ptr [eax + 32h], cl
        mov edx, dword ptr [ebp - 20h]
        mov al, byte ptr [ebp - 0dh]
        mov byte ptr [edx + 33h], al
        ; Exact mapped bytes EB 0D: jmp 0x461393
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 5bab18h
        ; Exact mapped bytes E8 85 E8 06 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ecx + 10h]
        mov dword ptr [edx + 38h], eax
        mov ecx, dword ptr [ecx + 14h]
        mov dword ptr [edx + 3ch], ecx
        push 0
        push 10h
        mov edx, dword ptr [ebp - 20h]
        add edx, 30h
        push edx
        push 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 8]
        push ecx
        push 80017000h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6C 5E 02 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x5e
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, 1
        add esp, 20h
        cmp ebp, esp
        ; Exact mapped bytes E8 0B 74 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
