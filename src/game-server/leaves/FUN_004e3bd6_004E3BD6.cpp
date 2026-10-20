// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E3BD6 .. +0x96 bytes.
extern "C" __declspec(naked) void FUN_004e3bd6_004E3BD6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 112h
        push 5c7b08h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 6E 75 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BD CD 04 00: call 0x5309bb
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xcd
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 10 DD 04 00: call 0x531916
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xdd
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 2A: je 0x4e3c34
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CC 20 02 00: call 0x505ce5
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        shl edx, 2
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AE 17 02 00: call 0x5053e0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 32: jmp 0x4e3c66
        __asm _emit 0xeb
        __asm _emit 0x32
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E7 20 02 00: call 0x505d23
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push -1
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 0A F7 FF FF: call 0x4e3357
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        shl ecx, 2
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 24 13 02 00: call 0x504f8a
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x13
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
