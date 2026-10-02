// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586EB530 .. +0x108 bytes.
extern "C" __declspec(naked) void FUN_586eb530() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 2ch], ecx
        xor eax, eax
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 09: jmp 0x586eb56f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 1
        mov dword ptr [ebp - 28h], ecx
        cmp dword ptr [ebp - 28h], 0fh
        ; Exact mapped bytes 0F 8D AF 00 00 00: jge 0x586eb628
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 2ch]
        add edx, 138h
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 5F DF FF FF: call 0x586e94f0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 98 35 DE FF: call 0x584ceb30
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x35
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 118h]
        add edx, dword ptr [ebp - 28h]
        cmp edx, eax
        ; Exact mapped bytes 73 5E: jae 0x586eb606
        __asm _emit 0x73
        __asm _emit 0x5e
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + eax*4 + 0a4h]
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 2ch]
        add eax, 138h
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 21 DF FF FF: call 0x586e94f0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 118h]
        add eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 43 C1 E1 FF: call 0x58507730
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4C A7 DD FF: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xa7
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov edx, dword ptr [ebp - 40h]
        push edx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 9D AA D9 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xaa
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1D: jmp 0x586eb623
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + eax*4 + 0a4h]
        mov dword ptr [ebp - 48h], edx
        lea eax, [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 7E AA D9 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xaa
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 3E FF FF FF: jmp 0x586eb566
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 1E 5A 14 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x5a
        __asm _emit 0x14
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
