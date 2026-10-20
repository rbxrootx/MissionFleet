// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00429F8D .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_00429f8d_00429F8D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 48h], 0
        ; Exact mapped bytes 74 45: je 0x429fea
        __asm _emit 0x74
        __asm _emit 0x45
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0ach], 0
        ; Exact mapped bytes 74 39: je 0x429fea
        __asm _emit 0x74
        __asm _emit 0x39
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ach], 0
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 80 C1 68 00: call dword ptr [0x68c180]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 1A AE 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xae
        __asm _emit 0x03
        __asm _emit 0x00
        push 20h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 48h]
        ; Exact mapped bytes E8 04 3F 00 00: call 0x42deee
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 FB AD 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xad
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
