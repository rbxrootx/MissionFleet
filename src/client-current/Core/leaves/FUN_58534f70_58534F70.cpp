// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58534F70 .. +0x1AF bytes.
extern "C" __declspec(naked) void FUN_58534f70_58534F70() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58882a5ch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 18h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        movzx eax, word ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 5B 18 F5 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x18
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx], 588a703ch
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0b8h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0bch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0c0h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0c4h], 0
        push 58h
        ; Exact mapped bytes E8 04 C0 2F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xc0
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 29: je 0x58535039
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 51 26: movsx edx, word ptr [ecx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x26
        sub edx, 1
        push edx
        mov eax, dword ptr [ebp + 14h]
        add eax, 3
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 DC 17 F5 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x17
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x58535040
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ecx + 0b4h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0b4h]
        mov dword ptr [ebp - 20h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 41 05 28 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x05
        __asm _emit 0x28
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0b4h]
        mov dword ptr [ebp - 24h], eax
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 BB 0D F5 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x0d
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 88h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 8ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 90h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 68h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 6ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 78h], 2
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 74h], 0ah
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0c8h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0cch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0d0h], 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 DD 0A 00 00: call 0x58535be0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
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
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
