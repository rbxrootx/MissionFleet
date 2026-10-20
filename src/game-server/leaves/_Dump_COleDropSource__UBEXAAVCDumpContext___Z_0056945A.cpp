// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056945A .. +0xAD bytes.
extern "C" __declspec(naked) void _Dump_COleDropSource__UBEXAAVCDumpContext___Z_0056945A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9D 94 FD FF: call 0x54290a
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x94
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 30h]
        push edx
        push 5cffd8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9A B6 FC FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xb6
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DF B8 FC FF: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xb8
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        push 5cffech
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7F B6 FC FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xb6
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5C B8 FC FF: call 0x534cff
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xb8
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 24h]
        push eax
        push 5d0008h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 64 B6 FC FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xb6
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 41 B8 FC FF: call 0x534cff
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xb8
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 28h]
        push edx
        push 5d0020h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 49 B6 FC FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xb6
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 26 B8 FC FF: call 0x534cff
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xb8
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2ch]
        push ecx
        push 5d003ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2E B6 FC FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xb6
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0B B8 FC FF: call 0x534cff
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xb8
        __asm _emit 0xfc
        __asm _emit 0xff
        push 5d0058h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1A B6 FC FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xb6
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
