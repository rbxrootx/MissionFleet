// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Bounds-checks, advances, and returns the next parsed line.
// Indexed function extent: 0x58797F30 .. +0x64 bytes.
extern "C" __declspec(naked) void FUN_58797f30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 EC 6B D3 FF: call 0x584ceb30
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x6b
        __asm _emit 0xd3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x58797f90
        __asm _emit 0x74
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 DD 6B D3 FF: call 0x584ceb30
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x6b
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 4], eax
        ; Exact mapped bytes 73 35: jae 0x58797f90
        __asm _emit 0x73
        __asm _emit 0x35
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 4]
        add edx, 8
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        sub ecx, 1
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AB F7 D6 FF: call 0x58507730
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xf7
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B4 DD D2 FF: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xdd
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes EB 04: jmp 0x58797f92
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB 02: jmp 0x58797f92
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
    }
}
