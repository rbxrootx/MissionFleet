// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00572ED7 .. +0xBA bytes.
extern "C" __declspec(naked) void _Dump_COleServerItem__UBEXAAVCDumpContext___Z_00572ED7() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F8 F8 FD FF: call 0x5527e2
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xf8
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 28h]
        push edx
        push 5d0aa4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1D 1C FC FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x1c
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 62 1E FC FF: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x1e
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2ch]
        push ecx
        push 5d0ab8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 02 1C FC FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x1c
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 47 1E FC FF: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x1e
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        add edx, 30h
        push edx
        push 5d0acch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E7 1B FC FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x1b
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 AB AA F7 FF: call 0x4ed9e5
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xaa
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 34h]
        push ecx
        push 5d0ae0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CD 1B FC FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x1b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9F 1E FC FF: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x1e
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 38h]
        push eax
        push 5d0af8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B2 1B FC FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x1b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 84 1E FC FF: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x1e
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        push ecx
        push 5d0b14h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 97 1B FC FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x1b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 10 1E FC FF: call 0x534d9b
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x1e
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
