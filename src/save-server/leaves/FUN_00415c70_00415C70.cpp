// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00415C70 .. +0x104 bytes.
extern "C" __declspec(naked) void FUN_00415c70_00415C70() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58b2d9h
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
        sub esp, 74h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 80h]
        mov ecx, 1dh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 4], 0
        mov al, byte ptr [ebp - 3ch]
        and al, 0fh
        or al, 20h
        mov byte ptr [ebp - 3ch], al
        mov cl, byte ptr [ebp - 3ch]
        and cl, 0f0h
        or cl, 1
        mov byte ptr [ebp - 3ch], cl
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        shr eax, 0ah
        and eax, 3fffffh
        mov dword ptr [ebp - 38h], eax
        push 0
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 BF 73 0B 00: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x73
        __asm _emit 0x0b
        __asm _emit 0x00
        mov esi, esp
        push eax
        push 63310ch
        lea ecx, [ebp - 34h]
        push ecx
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 FB F0 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xf0
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 500h
        ; Exact mapped bytes 0F BF 15 20 04 67 00: movsx edx, word ptr [0x670420]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x04
        __asm _emit 0x67
        __asm _emit 0x00
        add edx, 7
        push edx
        push 670388h
        push 500h
        ; Exact mapped bytes E8 BD 63 0B 00: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x63
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 14h], eax
        push 500h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 CC F5 04 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xf5
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 3ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 81 BA FE FF: call 0x4017c6
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 98 6B 0B 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x6b
        __asm _emit 0x0b
        __asm _emit 0x00
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
        add esp, 80h
        cmp ebp, esp
        ; Exact mapped bytes E8 82 F0 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xf0
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
