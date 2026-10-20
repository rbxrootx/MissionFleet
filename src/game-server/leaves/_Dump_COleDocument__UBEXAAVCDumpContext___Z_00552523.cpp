// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00552523 .. +0x115 bytes.
extern "C" __declspec(naked) void _Dump_COleDocument__UBEXAAVCDumpContext___Z_00552523() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 78 AE FB FF: call 0x50d3ae
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xae
        __asm _emit 0xfb
        __asm _emit 0xff
        push 5cf92ch
        mov ecx, dword ptr [ebp - 4]
        add ecx, 50h
        ; Exact mapped bytes E8 B3 09 FE FF: call 0x532ef9
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x09
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 5cf924h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C7 25 FE FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x25
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0C 28 FE FF: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x28
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B9 25 FE FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x25
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        push edx
        push 5cf938h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A5 25 FE FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x25
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4E 27 FE FF: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x27
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        push ecx
        push 5cf950h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8A 25 FE FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x25
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CF 27 FE FF: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x27
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4ch]
        push eax
        push 5cf964h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6F 25 FE FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x25
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B4 27 FE FF: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x27
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 78h]
        push edx
        push 5cf974h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 54 25 FE FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x25
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 26 28 FE FF: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x28
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 7ch]
        push ecx
        push 5cf984h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 39 25 FE FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x25
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7E 27 FE FF: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x27
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        push eax
        push 5cf998h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1B 25 FE FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x25
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 60 27 FE FF: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x27
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 84h]
        push edx
        push 5cf9a8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FD 24 FE FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CF 27 FE FF: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x27
        __asm _emit 0xfe
        __asm _emit 0xff
        push 5cf9b4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E9 24 FE FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
