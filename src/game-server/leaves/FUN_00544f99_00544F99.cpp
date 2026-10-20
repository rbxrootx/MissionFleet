// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00544F99 .. +0xD1 bytes.
extern "C" __declspec(naked) void FUN_00544f99_00544F99() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57d2bbh
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
        push ecx
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 63 D7 FF FF: call 0x542720
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1ch
        ; Exact mapped bytes E8 8F 06 00 00: call 0x545660
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 24h
        ; Exact mapped bytes E8 A2 06 00 00: call 0x545680
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 103ch
        ; Exact mapped bytes E8 B2 06 00 00: call 0x5456a0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1048h
        ; Exact mapped bytes E8 94 9F F4 FF: call 0x48ef90
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x9f
        __asm _emit 0xf4
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 584874h
        push 1ch
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 24h
        ; Exact mapped bytes E8 3A 9F F4 FF: call 0x48ef50
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x9f
        __asm _emit 0xf4
        __asm _emit 0xff
        push 14h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1ch
        ; Exact mapped bytes E8 2D 9F F4 FF: call 0x48ef50
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x9f
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 18h], 0
        mov edx, dword ptr [ebp - 10h]
        mov al, byte ptr [ebp + 8]
        mov byte ptr [edx + 14h], al
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 30h], 1
        push 18h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 103ch
        ; Exact mapped bytes E8 00 9F F4 FF: call 0x48ef50
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x9f
        __asm _emit 0xf4
        __asm _emit 0xff
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
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
