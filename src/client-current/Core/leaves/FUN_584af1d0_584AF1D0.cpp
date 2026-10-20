// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AF1D0 .. +0x11D bytes.
extern "C" __declspec(naked) void FUN_584af1d0_584AF1D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AC 0A 00 00: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 F5 57 FD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x57
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 14h]
        add edx, dword ptr [ebp - 10h]
        movzx eax, byte ptr [edx + 198h]
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 8], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        sub edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 8
        ; Exact mapped bytes 77 7A: ja 0x584af2a6
        __asm _emit 0x77
        __asm _emit 0x7a
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 24 85 F0 F2 4A 58: jmp dword ptr [eax*4 + 0x584af2f0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0xf2
        __asm _emit 0x4a
        __asm _emit 0x58
        mov dword ptr [ebp - 4], 1
        mov dword ptr [ebp - 8], 3dh
        ; Exact mapped bytes EB 67: jmp 0x584af2ad
        __asm _emit 0xeb
        __asm _emit 0x67
        mov dword ptr [ebp - 4], 2
        mov dword ptr [ebp - 8], 3eh
        ; Exact mapped bytes EB 57: jmp 0x584af2ad
        __asm _emit 0xeb
        __asm _emit 0x57
        mov dword ptr [ebp - 4], 3
        mov dword ptr [ebp - 8], 42h
        ; Exact mapped bytes EB 47: jmp 0x584af2ad
        __asm _emit 0xeb
        __asm _emit 0x47
        mov dword ptr [ebp - 4], 4
        mov dword ptr [ebp - 8], 43h
        ; Exact mapped bytes EB 37: jmp 0x584af2ad
        __asm _emit 0xeb
        __asm _emit 0x37
        mov dword ptr [ebp - 4], 5
        mov dword ptr [ebp - 8], 44h
        ; Exact mapped bytes EB 27: jmp 0x584af2ad
        __asm _emit 0xeb
        __asm _emit 0x27
        mov dword ptr [ebp - 4], 6
        mov dword ptr [ebp - 8], 45h
        ; Exact mapped bytes EB 17: jmp 0x584af2ad
        __asm _emit 0xeb
        __asm _emit 0x17
        mov dword ptr [ebp - 4], 7
        mov dword ptr [ebp - 8], 41h
        ; Exact mapped bytes EB 07: jmp 0x584af2ad
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 06: jne 0x584af2b9
        __asm _emit 0x75
        __asm _emit 0x06
        mov al, 1
        ; Exact mapped bytes EB 34: jmp 0x584af2eb
        __asm _emit 0xeb
        __asm _emit 0x34
        ; Exact mapped bytes EB 30: jmp 0x584af2e9
        __asm _emit 0xeb
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 14h]
        add ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 182h]
        cmp dword ptr [ebp - 18h], edx
        ; Exact mapped bytes 7C 1E: jl 0x584af2e9
        __asm _emit 0x7c
        __asm _emit 0x1e
        ; Exact mapped bytes E8 20 7F 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x7f
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 8B 9A 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x9a
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes EB 02: jmp 0x584af2eb
        __asm _emit 0xeb
        __asm _emit 0x02
        mov al, 1
        mov esp, ebp
    }
}
