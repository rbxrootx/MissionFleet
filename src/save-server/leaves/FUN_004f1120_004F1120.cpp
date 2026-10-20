// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F1120 .. +0xD4 bytes.
extern "C" __declspec(naked) void FUN_004f1120_004F1120() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58e765h
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
        sub esp, 110h
        mov dword ptr [ebp - 11ch], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 B7 3B 03 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x3b
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        lea eax, [ebp - 118h]
        push eax
        lea ecx, [ebp - 114h]
        push ecx
        push 104h
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes FF 15 10 B9 68 00: call dword ptr [0x68b910]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 118h]
        mov byte ptr [eax], 0
        push 105h
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 0E BF FD FF: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xbf
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        push 0
        push 678378h
        lea ecx, [ebp - 114h]
        push ecx
        ; Exact mapped bytes FF 15 00 B9 68 00: call dword ptr [0x68b900]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        push -1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 2A C0 FD FF: call 0x4cd1d3
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xc0
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 0E: jne 0x4f11bd
        __asm _emit 0x75
        __asm _emit 0x0e
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 F3 3B 03 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x3b
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 B7 D3 FE FF: call 0x4de574
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xd3
        __asm _emit 0xfe
        __asm _emit 0xff
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 51 B3 FD FF: call 0x4cc51a
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xb3
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 11ch]
        or al, 1
        mov dword ptr [ebp - 11ch], eax
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 09 B7 FD FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xb7
        __asm _emit 0xfd
        __asm _emit 0xff
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
        ret
    }
}
