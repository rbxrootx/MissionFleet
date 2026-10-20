// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58509B00 .. +0xC5 bytes.
extern "C" __declspec(naked) void FUN_58509b00_58509B00() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588809b5h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 28h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], 0
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp + 14h]
        ; Exact mapped bytes E8 02 93 FF FF: call 0x58502e40
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x93
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x58509b53
        __asm _emit 0x75
        __asm _emit 0x0e
        push 588a3b7ch
        lea ecx, [ebp + 14h]
        ; Exact mapped bytes E8 5E 60 FC FF: call 0x584cfbb0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x60
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        lea ecx, [ebp - 28h]
        push ecx
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 91 1A 00 00: call 0x5850b5f0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 34h], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 34h]
        push eax
        lea ecx, [ebp + 14h]
        ; Exact mapped bytes E8 E8 C0 FB FF: call 0x584c5c60
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xfb
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 AC 01 FA FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        lea ecx, [ebp + 14h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1F B7 FB FF: call 0x584c52b0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xb7
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 2ch]
        or edx, 1
        mov dword ptr [ebp - 2ch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 14h]
        ; Exact mapped bytes E8 87 01 FA FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0xfa
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
        pop ecx
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 8F 74 32 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x74
        __asm _emit 0x32
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
