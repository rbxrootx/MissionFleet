// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B30D0 .. +0x98 bytes.
extern "C" __declspec(naked) void FUN_584b30d0_584B30D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AC CB FF FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 04: jne 0x584b30f1
        __asm _emit 0x75
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 73: jmp 0x584b3164
        __asm _emit 0xeb
        __asm _emit 0x73
        mov byte ptr [ebp - 8], 6
        mov byte ptr [ebp - 7], 7
        mov byte ptr [ebp - 6], 8
        mov byte ptr [ebp - 5], 9
        mov dword ptr [ebp - 10h], 4
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x584b311a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 7D 40: jge 0x584b3162
        __asm _emit 0x7d
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B6 18 FD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x18
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 54 0D F8: movsx edx, byte ptr [ebp + ecx - 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x54
        __asm _emit 0x0d
        __asm _emit 0xf8
        cmp eax, edx
        ; Exact mapped bytes 75 1F: jne 0x584b3160
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes E8 AA 40 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        push 0
        push 0
        push 0
        push 7d1h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 14 5C 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes EB 04: jmp 0x584b3164
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB AF: jmp 0x584b3111
        __asm _emit 0xeb
        __asm _emit 0xaf
        mov al, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
