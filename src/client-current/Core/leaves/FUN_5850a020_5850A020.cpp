// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850A020 .. +0x93 bytes.
extern "C" __declspec(naked) void FUN_5850a020_5850A020() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 14h]
        sub eax, dword ptr [ebp - 0ch]
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 77 4E: ja 0x5850a08e
        __asm _emit 0x77
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 10h], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2C 04 FA FF: call 0x584aa480
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x04
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        movzx eax, byte ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 54 00 00 00: call 0x5850a0c0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 1], 0
        lea eax, [ebp - 1]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 5A 05 FA FF: call 0x584aa5e0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x05
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 1F: jmp 0x5850a0ad
        __asm _emit 0xeb
        __asm _emit 0x1f
        xor edx, edx
        mov byte ptr [ebp - 2], dl
        movzx eax, byte ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        movzx edx, byte ptr [ebp - 2]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B3 B6 FF FF: call 0x58505760
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
