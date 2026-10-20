// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D0BB7 .. +0xA8 bytes.
extern "C" __declspec(naked) void FUN_004d0bb7_004D0BB7() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57d81bh
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
        sub esp, 10h
        mov dword ptr [ebp - 1ch], ecx
        mov dword ptr [ebp - 18h], 0
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 84 FC FF FF: call 0x4d086c
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 1
        push 2eh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 E1 D4 FF FF: call 0x4ce0da
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7C 29: jl 0x4d0c2b
        __asm _emit 0x7c
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 38 D3 FF FF: call 0x4cdf4a
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 18h]
        or al, 1
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 26 CC 01 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 24: jmp 0x4d0c4f
        __asm _emit 0xeb
        __asm _emit 0x24
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 43 C8 01 00: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        or edx, 1
        mov dword ptr [ebp - 18h], edx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 00 CC 01 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
