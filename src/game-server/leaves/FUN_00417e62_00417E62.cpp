// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00417E62 .. +0xB2 bytes.
extern "C" __declspec(naked) void FUN_00417e62_00417E62() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        push edi
        push ecx
        lea edi, [ebp - 2ch]
        mov ecx, 0bh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 4
        ; Exact mapped bytes E8 CD E5 FF FF: call 0x416459
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 16ch]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 15 38 03 00: call 0x44b6b6
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 8
        ; Exact mapped bytes E8 C6 E3 FF FF: call 0x416279
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 1ch], ecx
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes DF 6D E4: fild qword ptr [ebp - 0x1c]
        __asm _emit 0xdf
        __asm _emit 0x6d
        __asm _emit 0xe4
        sub esp, 8
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        ; Exact mapped bytes E8 B3 1A 09 00: call 0x4a9984
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x1a
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 24h], edx
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes DF 6D DC: fild qword ptr [ebp - 0x24]
        __asm _emit 0xdf
        __asm _emit 0x6d
        __asm _emit 0xdc
        ; Exact mapped bytes DE C1: faddp st(1)
        __asm _emit 0xde
        __asm _emit 0xc1
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 2ch], eax
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes DF 6D D4: fild qword ptr [ebp - 0x2c]
        __asm _emit 0xdf
        __asm _emit 0x6d
        __asm _emit 0xd4
        ; Exact mapped bytes DE C1: faddp st(1)
        __asm _emit 0xde
        __asm _emit 0xc1
        ; Exact mapped bytes E8 FF 15 09 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        pop edi
        add esp, 2ch
        cmp ebp, esp
        ; Exact mapped bytes E8 D2 08 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x08
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
