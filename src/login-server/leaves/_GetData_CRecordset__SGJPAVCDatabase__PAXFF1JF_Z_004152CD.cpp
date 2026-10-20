// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004152CD .. +0x50 bytes.
extern "C" __declspec(naked) void _GetData_CRecordset__SGJPAVCDatabase__PAXFF1JF_Z_004152CD() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        lea eax, [ebp - 4]
        push eax
        push dword ptr [ebp + 1ch]
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 C3 72 01 00: call 0x42c5ac
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 02 00: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 74 E2: je 0x4152d1
        __asm _emit 0x74
        __asm _emit 0xe2
        ; Exact mapped bytes 66 3D 01 00: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 74 21: je 0x415316
        __asm _emit 0x74
        __asm _emit 0x21
        ; Exact mapped bytes 66 3D 64 00: cmp ax, 0x64
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 75 0A: jne 0x415305
        __asm _emit 0x75
        __asm _emit 0x0a
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        push 64h
        ; Exact mapped bytes EB 0C: jmp 0x415311
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0C: je 0x415316
        __asm _emit 0x74
        __asm _emit 0x0c
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 00 C6 FF FF: call 0x411916
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        leave
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
