// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047FC0D .. +0x9A bytes.
extern "C" __declspec(naked) void FUN_0047fc0d_0047FC0D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 8ech], 0
        ; Exact mapped bytes 75 70: jne 0x47fc97
        __asm _emit 0x75
        __asm _emit 0x70
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8ech], 1
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 74 3B: je 0x47fc78
        __asm _emit 0x74
        __asm _emit 0x3b
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020d01h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 DB 75 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [edx + 8ech], 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov ecx, dword ptr [ecx + 8e8h]
        ; Exact mapped bytes E8 34 E6 FF FF: call 0x47e2ac
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2C E6 FF FF: call 0x47e2ac
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020d01h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9B 75 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 3F 8B 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x8b
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
