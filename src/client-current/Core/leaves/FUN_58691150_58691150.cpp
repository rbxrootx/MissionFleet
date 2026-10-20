// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58691150 .. +0x137 bytes.
extern "C" __declspec(naked) void FUN_58691150_58691150() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + eax*4 + 5d0h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 148h], 1
        imul edx, dword ptr [ebp + 8], 0d4h
        mov eax, dword ptr [ebp - 4]
        lea edi, [eax + edx + 1ach]
        mov ecx, 35h
        mov esi, dword ptr [ebp + 14h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        imul ecx, dword ptr [ebp + 8], 0d4h
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + ecx + 25ch]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 134h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 728h]
        mov dword ptr [ebp - 8], ecx
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 14 4C DF FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x4c
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 72ch]
        mov dword ptr [ebp - 0ch], eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 FE 4B DF FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x4b
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 734h]
        mov dword ptr [ebp - 10h], edx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E8 4B DF FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xdf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 730h]
        mov dword ptr [ebp - 14h], ecx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D2 4B DF FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x4b
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 6c0h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp + 14h]
        movzx eax, word ptr [edx + 98h]
        add eax, 37h
        push eax
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 99 38 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x38
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 1A 5A DF FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x5a
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 6ach]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp + 14h]
        movzx eax, word ptr [edx + 98h]
        add eax, 37h
        push eax
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 61 38 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x38
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 E2 59 DF FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x59
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
