// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584E3BC0 .. +0xA3 bytes.
extern "C" __declspec(naked) void FUN_584e3bc0_584E3BC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 8], 0ffffffffh
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EB 2D FA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x2d
        __asm _emit 0xfa
        __asm _emit 0xff
        sub eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CD 84 FA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0xff
        sub eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x584e3bfb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 6
        ; Exact mapped bytes 7D 5B: jge 0x584e3c5c
        __asm _emit 0x7d
        __asm _emit 0x5b
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A7 6C FC FF: call 0x584aa8b0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x6c
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 18h]
        add edx, dword ptr [eax + ecx*8]
        mov dword ptr [ebp - 10h], edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 93 6C FC FF: call 0x584aa8b0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x6c
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 14h]
        sub edx, dword ptr [eax + ecx*8 + 4]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 10h]
        imul eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        imul ecx, dword ptr [ebp - 0ch]
        add eax, ecx
        mov edx, dword ptr [ebp + 14h]
        imul edx, dword ptr [ebp + 14h]
        cmp eax, edx
        ; Exact mapped bytes 7F 15: jg 0x584e3c5a
        __asm _emit 0x7f
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 10h]
        imul eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        imul ecx, dword ptr [ebp - 0ch]
        add eax, ecx
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 02: jmp 0x584e3c5c
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 96: jmp 0x584e3bf2
        __asm _emit 0xeb
        __asm _emit 0x96
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
