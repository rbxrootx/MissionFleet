// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58610F90 .. +0x11B bytes.
extern "C" __declspec(naked) void FUN_58610f90_58610F90() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 BB 3A E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x3a
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 40h]
        cmp ecx, 0ffh
        ; Exact mapped bytes 7F 16: jg 0x58610fc7
        __asm _emit 0x7f
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 A1 3A E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x3a
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx eax, word ptr [eax + 40h]
        test eax, eax
        ; Exact mapped bytes 7D 14: jge 0x58610fdb
        __asm _emit 0x7d
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 8B 3A E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x3a
        __asm _emit 0xe7
        __asm _emit 0xff
        xor edx, edx
        ; Exact mapped bytes 66 89 50 40: mov word ptr [eax + 0x40], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x40
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 77 3A E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x3a
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 42h]
        cmp ecx, 0ffh
        ; Exact mapped bytes 7F 16: jg 0x5861100b
        __asm _emit 0x7f
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 5D 3A E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x3a
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx eax, word ptr [eax + 42h]
        test eax, eax
        ; Exact mapped bytes 7D 14: jge 0x5861101f
        __asm _emit 0x7d
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 47 3A E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x3a
        __asm _emit 0xe7
        __asm _emit 0xff
        xor edx, edx
        ; Exact mapped bytes 66 89 50 42: mov word ptr [eax + 0x42], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x42
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 33 3A E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x3a
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 46h]
        cmp ecx, 0ffh
        ; Exact mapped bytes 7F 16: jg 0x5861104f
        __asm _emit 0x7f
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 19 3A E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x3a
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx eax, word ptr [eax + 46h]
        test eax, eax
        ; Exact mapped bytes 7D 14: jge 0x58611063
        __asm _emit 0x7d
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 03 3A E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x3a
        __asm _emit 0xe7
        __asm _emit 0xff
        xor edx, edx
        ; Exact mapped bytes 66 89 50 46: mov word ptr [eax + 0x46], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x46
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 EF 39 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x39
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 44h]
        cmp ecx, 0ffh
        ; Exact mapped bytes 7F 16: jg 0x58611093
        __asm _emit 0x7f
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 D5 39 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x39
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx eax, word ptr [eax + 44h]
        test eax, eax
        ; Exact mapped bytes 7D 14: jge 0x586110a7
        __asm _emit 0x7d
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 BF 39 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x39
        __asm _emit 0xe7
        __asm _emit 0xff
        xor edx, edx
        ; Exact mapped bytes 66 89 50 44: mov word ptr [eax + 0x44], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x44
        mov esp, ebp
        pop ebp
        ret
    }
}
