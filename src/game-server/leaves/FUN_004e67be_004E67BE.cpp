// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E67BE .. +0x77 bytes.
extern "C" __declspec(naked) void FUN_004e67be_004E67BE() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 0e3h
        push 5c7c98h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 85 49 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 14: jge 0x4e67f5
        __asm _emit 0x7d
        __asm _emit 0x14
        push 0e4h
        push 5c7c98h
        ; Exact mapped bytes E8 10 E2 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xe2
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e67f5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4e67db
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 7C 11: jl 0x4e6817
        __asm _emit 0x7c
        __asm _emit 0x11
        push -1
        mov ecx, dword ptr [ebp + 8]
        add ecx, 1
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D4 F9 FF FF: call 0x4e61eb
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp + 8]
        lea ecx, [ecx + edx*4]
        ; Exact mapped bytes E8 D1 72 00 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x72
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
