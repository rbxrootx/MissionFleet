// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58734DF0 .. +0x9C bytes.
extern "C" __declspec(naked) void FUN_58734df0_58734DF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 6ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 68h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58734e1f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 54h
        ; Exact mapped bytes E8 16 34 D5 FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x34
        __asm _emit 0xd5
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 73 59: jae 0x58734e88
        __asm _emit 0x73
        __asm _emit 0x59
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes 75 27: jne 0x58734e61
        __asm _emit 0x75
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 4]
        add edx, 54h
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C1 2B D5 FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x2b
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        push 5
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E2 A9 D6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xa9
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 25: jmp 0x58734e86
        __asm _emit 0xeb
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 4]
        add edx, 54h
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 9A 2B D5 FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x2b
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 18h], ecx
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 BB A9 D6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xa9
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 8E: jmp 0x58734e16
        __asm _emit 0xeb
        __asm _emit 0x8e
        mov esp, ebp
        pop ebp
        ret
    }
}
