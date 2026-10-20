// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005580A0 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_005580a0_005580A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 1eh
        push 5cfe58h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 A4 30 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x30
        __asm _emit 0xfa
        __asm _emit 0xff
        push 58e440h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 6B 3F FF FF: call 0x54c034
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x3f
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 11: jne 0x5580e3
        __asm _emit 0x75
        __asm _emit 0x11
        push 22h
        push 5cfe58h
        ; Exact mapped bytes E8 22 C9 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xc9
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5580e3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x5580cc
        __asm _emit 0x75
        __asm _emit 0xe3
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
