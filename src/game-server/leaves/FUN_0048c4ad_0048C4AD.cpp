// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048C4AD .. +0x8F bytes.
extern "C" __declspec(naked) void FUN_0048c4ad_0048C4AD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax], 581f64h
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 47: je 0x48c52d
        __asm _emit 0x74
        __asm _emit 0x47
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F2 4D F7 FF: call 0x4012e0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x4d
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 1B: je 0x48c51e
        __asm _emit 0x74
        __asm _emit 0x1b
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        cmp esi, esp
        ; Exact mapped bytes E8 C7 C2 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x48c525
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB B3: jmp 0x48c4e0
        __asm _emit 0xeb
        __asm _emit 0xb3
        pop esi
        add esp, 18h
        cmp ebp, esp
        ; Exact mapped bytes E8 A8 C2 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
