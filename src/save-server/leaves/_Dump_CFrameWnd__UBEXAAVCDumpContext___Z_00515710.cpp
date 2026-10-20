// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00515710 .. +0xEF bytes.
extern "C" __declspec(naked) void _Dump_CFrameWnd__UBEXAAVCDumpContext___Z_00515710() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F0 B3 FB FF: call 0x4d0b13
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xb3
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 48h]
        push edx
        push 674024h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 14 31 01 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 BD 32 01 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 40h]
        push ecx
        push 674038h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F9 30 01 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 3E 33 01 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8ch]
        push eax
        push 674048h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DB 30 01 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 84 32 01 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 90h]
        push edx
        push 674058h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BD 30 01 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 66 32 01 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 94h]
        push ecx
        push 67406ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9F 30 01 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 48 32 01 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 98h], 0
        ; Exact mapped bytes 74 20: je 0x5157df
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 98h]
        push ecx
        push 674084h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 75 30 01 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 EE 32 01 00: call 0x528acb
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x5157ec
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 674098h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5F 30 01 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        push 6740a8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 52 30 01 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
