// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B87C0 .. +0xF1 bytes.
extern "C" __declspec(naked) void FUN_584b87c0_584B87C0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887e703h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0ch
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
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 67 9A FC FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x9a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 58895954h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 60h
        ; Exact mapped bytes E8 AC EC FC FF: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xec
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 6ch
        ; Exact mapped bytes E8 9D EC FC FF: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xec
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 60h
        mov dword ptr [ebp - 14h], ecx
        push 8
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 96 18 00 00: call 0x584ba0e0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        add edx, 6ch
        mov dword ptr [ebp - 18h], edx
        push 8
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 83 18 00 00: call 0x584ba0e0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 78h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 7ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 80h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 88h], 0
        push 0fh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 FB D6 FC FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xd6
        __asm _emit 0xfc
        __asm _emit 0xff
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
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
