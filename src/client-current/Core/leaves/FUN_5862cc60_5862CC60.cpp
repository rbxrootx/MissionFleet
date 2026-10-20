// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5862CC60 .. +0xEB bytes.
extern "C" __declspec(naked) void FUN_5862cc60_5862CC60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 174h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1fch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D9 4A 19 00: call 0x587c1760
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x4a
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5862cc9a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 0F 8D A3 00 00 00: jge 0x5862cd47
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1fch]
        add eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + 1f8h]
        ; Exact mapped bytes 7D 6C: jge 0x5862cd27
        __asm _emit 0x7d
        __asm _emit 0x6c
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 154h]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 174h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1fch]
        add edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 74 3E 19 00: call 0x587c0b60
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x3e
        __asm _emit 0x19
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        push 0
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes 8B 0D 1C 06 96 58: mov ecx, dword ptr [0x5896061c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 20 E7 E8 FF: call 0x584bb420
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xe7
        __asm _emit 0xe8
        __asm _emit 0xff
        sub eax, 1
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes 8B 0D B8 06 96 58: mov ecx, dword ptr [0x589606b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FB 09 E9 FF: call 0x584bd710
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x09
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 0C 92 E5 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x92
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1B: jmp 0x5862cd42
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 154h]
        mov dword ptr [ebp - 24h], edx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 EF 91 E5 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x91
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 4A FF FF FF: jmp 0x5862cc91
        __asm _emit 0xe9
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
