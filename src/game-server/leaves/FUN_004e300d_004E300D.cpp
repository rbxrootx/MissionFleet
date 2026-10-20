// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E300D .. +0x94 bytes.
extern "C" __declspec(naked) void FUN_004e300d_004E300D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 112h
        push 5c7a90h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 37 81 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 86 D9 04 00: call 0x5309bb
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xd9
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D9 E8 04 00: call 0x531916
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 29: je 0x4e306a
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 95 2C 02 00: call 0x505ce5
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        shl edx, 1
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 78 23 02 00: call 0x5053e0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x23
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 31: jmp 0x4e309b
        __asm _emit 0xeb
        __asm _emit 0x31
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B1 2C 02 00: call 0x505d23
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push -1
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 14 F7 FF FF: call 0x4e2797
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        shl ecx, 1
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EF 1E 02 00: call 0x504f8a
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x1e
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
