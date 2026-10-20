// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58558E50 .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_58558e50_58558E50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 5F DB F2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xdb
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 60h], eax
        ; Exact mapped bytes 0F 87 80 00 00 00: ja 0x58558eed
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 3B 32 F3 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x32
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 64h], eax
        ; Exact mapped bytes 77 70: ja 0x58558eed
        __asm _emit 0x77
        __asm _emit 0x70
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 3B DB F2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xdb
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        cmp eax, dword ptr [ecx + 68h]
        ; Exact mapped bytes 77 60: ja 0x58558eed
        __asm _emit 0x77
        __asm _emit 0x60
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 1B 32 F3 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x32
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 6ch]
        ; Exact mapped bytes 77 50: ja 0x58558eed
        __asm _emit 0x77
        __asm _emit 0x50
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 7B 42 F3 FF: call 0x5848d120
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x42
        __asm _emit 0xf3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x58558eb2
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 3
        ; Exact mapped bytes EB 24: jmp 0x58558ed6
        __asm _emit 0xeb
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 54h]
        and ecx, 1fh
        cmp ecx, 8
        ; Exact mapped bytes 75 09: jne 0x58558ec9
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 8
        ; Exact mapped bytes EB 07: jmp 0x58558ed0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], edx
        movzx eax, byte ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 F5 03 00 00: call 0x585592e0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58558eef
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
