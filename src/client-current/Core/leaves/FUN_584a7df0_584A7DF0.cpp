// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A7DF0 .. +0xCF bytes.
extern "C" __declspec(naked) void FUN_584a7df0_584A7DF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 0ch], 0
        lea ecx, [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 8
        push edx
        ; Exact mapped bytes E8 BA A1 FF FF: call 0x584a1fd0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xa1
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 10h], 0
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 4
        push ecx
        ; Exact mapped bytes E8 9D A1 FF FF: call 0x584a1fd0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xa1
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 14h], 0
        lea edx, [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 83 A1 FF FF: call 0x584a1fd0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xa1
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B5 00 FE FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 4F F4 FD FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xf4
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov cl, byte ptr [ebp - 3]
        mov byte ptr [ebp - 1], cl
        lea edx, [ebp - 18h]
        push edx
        lea eax, [ebp - 1ch]
        push eax
        lea ecx, [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        movzx eax, byte ptr [ebp - 1]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 B6 FD FF FF: call 0x584a7c40
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 2ch], ecx
        xor edx, edx
        mov byte ptr [ebp - 2], dl
        lea eax, [ebp - 2]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 2E FF FD FF: call 0x58487dd0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xff
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 1B FF FD FF: call 0x58487dd0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xff
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
