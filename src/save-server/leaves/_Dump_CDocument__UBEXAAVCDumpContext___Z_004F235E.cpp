// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F235E .. +0xDE bytes.
extern "C" __declspec(naked) void _Dump_CDocument__UBEXAAVCDumpContext___Z_004F235E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 25 80 FE FF: call 0x4da398
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x80
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1ch
        push ecx
        push 67840ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C4 64 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x64
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 F8 A6 FD FF: call 0x4cca85
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xa6
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        add edx, 20h
        push edx
        push 67841ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AA 64 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x64
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 DE A6 FD FF: call 0x4cca85
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xa6
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 44h]
        push ecx
        push 678430h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 90 64 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x64
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 D5 66 03 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 24h]
        push eax
        push 678440h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 75 64 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x64
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 47 67 03 00: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x67
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 33 39 03 00: call 0x525d18
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x39
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 40: jle 0x4f2429
        __asm _emit 0x7e
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 68: call dword ptr [edx + 0x68]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x68
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 2C: je 0x4f2429
        __asm _emit 0x74
        __asm _emit 0x2c
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        push 678454h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2B 64 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x64
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 FD 66 03 00: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB CE: jmp 0x4f23f7
        __asm _emit 0xeb
        __asm _emit 0xce
        push 678460h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 15 64 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
