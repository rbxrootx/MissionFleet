// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048B984 .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_0048b984_0048B984() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0c28h]
        ; Exact mapped bytes E8 07 86 F7 FF: call 0x403fb0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x86
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 29: je 0x48b9db
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 28 E1 FF FF: call 0x489af6
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DA 85 F7 FF: call 0x403fb0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x85
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB D1: jmp 0x48b9ac
        __asm _emit 0xeb
        __asm _emit 0xd1
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 FB CD 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xcd
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
