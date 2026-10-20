// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58667180 .. +0x83 bytes.
extern "C" __declspec(naked) void FUN_58667180_58667180() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 6E: je 0x586671fd
        __asm _emit 0x74
        __asm _emit 0x6e
        mov ecx, dword ptr [ebp - 4]
        add ecx, 80h
        ; Exact mapped bytes E8 A3 10 E2 FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x10
        __asm _emit 0xe2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x586671bf
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        add ecx, 80h
        ; Exact mapped bytes E8 E1 2E E5 FF: call 0x584ba090
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x2e
        __asm _emit 0xe5
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 8], eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 52 90 FB FF: call 0x58620210
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x90
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        add ecx, 80h
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 80h
        mov dword ptr [ebp - 0ch], edx
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 9D 0E E2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x0e
        __asm _emit 0xe2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        lea edx, [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        lea ecx, [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B4 2E E5 FF: call 0x584ba0b0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x2e
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
