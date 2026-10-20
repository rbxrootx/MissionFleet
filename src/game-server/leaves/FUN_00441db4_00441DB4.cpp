// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00441DB4 .. +0xC4 bytes.
extern "C" __declspec(naked) void FUN_00441db4_00441DB4() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57ac2ch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 438h
        push edi
        push ecx
        lea edi, [ebp - 444h]
        mov ecx, 10eh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 444h], ecx
        push 0
        ; Exact mapped bytes E8 D1 BA 04 00: call 0x48d8c5
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 4
        push 0
        ; Exact mapped bytes E8 92 83 04 00: call 0x48a190
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x83
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 444h]
        ; Exact mapped bytes E8 67 1D 10 00: call 0x543b70
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x1d
        __asm _emit 0x10
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 43ch]
        ; Exact mapped bytes E8 AF 03 00 00: call 0x4421c5
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 444h]
        lea ecx, [ebp - 43ch]
        mov dword ptr [eax + 1ch], ecx
        lea ecx, [ebp - 43ch]
        ; Exact mapped bytes E8 F1 E8 0A 00: call 0x4f0728
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 440h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 43ch]
        ; Exact mapped bytes E8 CA 00 00 00: call 0x441f20
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 440h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        add esp, 444h
        cmp ebp, esp
        ; Exact mapped bytes E8 6C 69 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x69
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
